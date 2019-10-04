import React from 'react';
import { Switch, Route, withRouter } from 'react-router-dom'
import './style.scss'

import Home from './pages/Home.js'
import About from './pages/About.js'
import Draws from './pages/Draws.js'
import ContactMe from './pages/ContactMe.js'

const Main = () => (
    <main className={'main'}>
        <Switch>
            <Route exact path='/' component={withRouter(Home)}/>
            <Route path='/about' component={withRouter(About)}/>
            <Route path='/draws' component={withRouter(Draws)}/>
            <Route path='/contact' component={withRouter(ContactMe)}/>
        </Switch>
    </main>
);

export default Main



