import * as actionTypes from './actionTypes';

const { CREATE_NEW_CONTACT, GET_ALL_CONTACTS } = actionTypes;
export const createContact = (name, email, content) => {
    return {
        type: CREATE_NEW_CONTACT,
        contact: {name, email, content}
    }
};

export const getAllContacts = contacts => {
    return {
        type: GET_ALL_CONTACTS,
        payload: contacts
    }
}