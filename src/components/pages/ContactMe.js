import React from 'react';
import { connect } from 'react-redux';
import * as contactAction from '../../actions/contactAction';

class ContactMe extends React.Component {

    constructor(props) {
        super(props);
        this.handleChange = this.handleChange.bind(this);
        this.handleSubmit = this.handleSubmit.bind(this);
        this.state = {
            name: '',
            email: '',
            content: '',
            contacts: []
        }
    }

    handleChange = name => e => {
        const value = e.target.value;
        this.setState({[name]: value});
    };

    handleSubmit = (e) => {
        const { createContact } = this.props;
        const { name, email, content } = this.state;
        e.preventDefault()
        createContact(name, email, content)
    };

    getContacts = () => {
        const { contacts } = this.props;
        this.setState({contacts})
    }

    render() {
        // console.log('$',this.state)
        // console.log('@',this.props.contacts)
        const { contacts } = this.state;
        return (
            <div className={'contactForm'}>
                <div className={'contactFormWrapper'}>
                    <h3>Add Contact Form</h3>
                    <form onSubmit={this.handleSubmit}>
                        <div>
                            <label>Name: </label>
                            <input type="text" name='name' onChange={this.handleChange('name')}/>
                        </div>
                        <div>
                            <label>Email: </label>
                            <input type="email" name='email' onChange={this.handleChange('email')}/>
                        </div>
                        <div>
                            <label>Content: </label>
                            <textarea name='content' onChange={this.handleChange('content')}/>
                        </div>
                        <div className={'buttons'}>
                            <button onClick={this.getContacts}>Get All Contacts</button>
                            <input type="submit"/>
                        </div>
                    </form>
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
    const { contacts } = state
    return {
        contacts
    }
};

const mapDispatchToProps = (dispatch) => {
    return {
        createContact: (name, email, content) => dispatch(contactAction.createContact(name, email, content)),
        getAllContacts: () => dispatch(contactAction.getAllContacts())
    }
};

export default connect(mapStateToProps, mapDispatchToProps)(ContactMe);
