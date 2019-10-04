import React from 'react';
import { Link } from "react-router-dom";
import './style.scss'

export class Navigation extends React.Component{

    render() {
        return (
            <div className={'navigation'}>
                <ul>
                    <li>
                        <Link to="/">Home</Link>
                    </li>
                    <li>
                        <Link to="/about">About</Link>
                    </li>
                    <li>
                        <Link to="/draws">Draws</Link>

                    </li>
                </ul>
            </div>
        );
    }
}

export default Navigation