import React from 'react';
import { connect } from 'react-redux';
import * as contactAction from '../../actions/contactAction';
import * as yup from 'yup';
import { getUnique } from '../utils/helpers.js'

class ContactMe extends React.Component {

    constructor(props) {
        super(props);
        this.handleChange = this.handleChange.bind(this);
        this.handleSubmit = this.handleSubmit.bind(this);
        this.state = {
            name: '',
            nameError: '',
            email: '',
            emailError: '',
            content: '',
            contacts: [],
            sendButtonVisibility: '',
            isSendButtonVisibility: true
        };


    }


    validationSchemas = {
        name: yup.string().required("Name is Required."),
        email: yup
            .string()
            .email("Please Enter an valid Email")
            .required("Email is Required.")
            // .test('email', 'Email must be unique', val => {})  //////////??????????



    };

    validate = (name, value) => {
        const validationSchema = this.validationSchemas[name];
        const error = name + 'Error';

        if (!validationSchema) {
            return;
        }

        validationSchema.validate(value)
            .then(() => {
                this.setState({
                    [name]: value,
                    [error]: ''
                })
            })
            .catch(err => {
                this.setState({
                    [name]: value,
                    [error]: err.errors[0]
                })
            });
        this.isSendVisible()
    };

    isSendVisible = () => {
        const { emailError, nameError } = this.state;
        const isSendVisible = Boolean(emailError) || Boolean(nameError);
        const sendButtonClass = !isSendVisible ? 'enable' : 'disable';

        this.setState({
            sendButtonVisibility: sendButtonClass,
            isSendButtonVisibility: !isSendVisible
        })
    };

    handleChange = name => e => {
        const value = e.target.value;

        this.setState({
            [name]: value},
            () => this.validate(name, value)
        )
    };

    handleSubmit = (e) => {
        const { createContact } = this.props;
        const { name, email, content } = this.state;

        e.preventDefault();
        createContact(name, email, content);

        this.setState({
            name: '',
            email: '',
            content: ''
        });
        this.validate({'name': name, 'email': email})
    };

    getContacts = () => {
        const { contactsList } = this.props;
        const clearContacts = getUnique(contactsList.contacts, 'email');

        this.setState({
            contacts: clearContacts
        })
    };

    render() {
        // console.log('$',this.state)
        // console.log('@',this.props)
        const {
            contacts,
            name,
            email,
            content,
            emailError,
            nameError,
            sendButtonVisibility,
            isSendButtonVisibility
        } = this.state;

        return (
            <div className={'contactForm'}>
                <div className={'contactFormWrapper'}>
                    <h3>Add Contact Form</h3>
                    <form onSubmit={this.handleSubmit}>
                        <div>
                            <label>Name: </label>
                            <input type="text" name='name' value={name} onChange={this.handleChange('name')} onBlur={this.validate.bind(this, 'name', name)}/>
                            <span>{nameError}</span>
                        </div>
                        <div>
                            <label>Email: </label>
                            <input
                                type="email"
                                name='email'

                                value={email}
                                onChange={this.handleChange('email')}
                                onBlur={this.validate.bind(this, 'email', email)}
                            />
                            <span>{emailError}</span>
                        </div>
                        <div>
                            <label>Content: </label>
                            <textarea name='content' value={content} onChange={this.handleChange('content')}/>
                        </div>
                        <div className={'buttons'}>
                            <button
                                type="submit"
                                disabled={!isSendButtonVisibility}
                                className={sendButtonVisibility}
                            >Send</button>
                        </div>
                    </form>
                    <div className={'buttons'}>
                        <button onClick={this.getContacts}>Get All Contacts</button>
                    </div>
                </div>
                <div className={'contactsList'}>
                    <ul>
                        {
                            contacts.map((contact, index) => {
                                return <li key={index}>
                                    <span>name: {contact.name} |</span>
                                    <span>email: {contact.email} |</span>
                                    <span>content: {contact.content}</span>
                                </li>
                            })

                        }

                    </ul>
                </div>
            </div>
        )
    }
};


const mapStateToProps = (state, ownProps) => {
    const { contacts } = state;

    return {
        contactsList: contacts
    }
};

const mapDispatchToProps = (dispatch) => {
    return {
        createContact: (name, email, content) => dispatch(contactAction.createContact(name, email, content)),
        getAllContacts: () => dispatch(contactAction.getAllContacts())
    }
};

export default connect(mapStateToProps, mapDispatchToProps)(ContactMe);
