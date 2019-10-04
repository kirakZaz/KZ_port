import * as actionTypes from '../actions/actionTypes';

const { CREATE_NEW_CONTACT, GET_ALL_CONTACTS } = actionTypes;


const initialState = {
    contact: {
        name: 'test',
        email: 'test@test.co',
        content: 'testttttt'
    }
}
export default (state = initialState, action) => {
    // console.log('state',state)
    switch(action.type) {
        case CREATE_NEW_CONTACT:
            const { data } = state
            console.log('action',action, '|', state)
            return data.map((item, index) => {
                console.log(item)
                if (item.email !== action.email) {
                    // This isn't the item we care about - keep it as-is
                    return [...state]
                }

                // Otherwise, this is the one we want - return an updated value
                return [
                    ...state,
                    state = action.contact
                ]
            })


            // return [
            //     ...state,
            //     state = action.contact
            // ];


        case GET_ALL_CONTACTS:
            return [
                ...state,
                state.contact
            ];
        default:
            return state;
    }
}
