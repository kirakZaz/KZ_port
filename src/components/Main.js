import React from 'react';
import { Switch, Route, withRouter } from 'react-router-dom'
import './style.scss'

import Home from './Home.js'
import About from './About.js'
import Draws from './Draws.js'

const Main = () => (
    <main className={'main'}>
        <Switch>
            <Route exact path='/' component={withRouter(Home)}/>
            <Route path='/about' component={withRouter(About)}/>
            <Route path='/draws' component={withRouter(Draws)}/>
        </Switch>
    </main>
);

export default Main



