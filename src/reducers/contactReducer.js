import * as actionTypes from '../actions/actionTypes';

const { CREATE_NEW_CONTACT, GET_ALL_CONTACTS } = actionTypes;


const initialState = {
    contacts: [
        {
            name: 'initial name',
            email: 'initial@email.com',
            content: 'initial'
        }
    ]
}
export default (state = initialState, action) => {

    switch(action.type) {
        case CREATE_NEW_CONTACT:
            const { contacts } = state;
            const { name, email, content } = action.payload

            return {
                ...state,
                contacts: [
                    ...contacts,
                    {
                        name,
                        email,
                        content
                    }
                ]
            };

        case GET_ALL_CONTACTS:
            return {
                ...state,
                contacts: state.contacts
            };
        default:
            return state;
    }
}
