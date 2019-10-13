import React from 'react';

import './App.scss';
import Navigation from "./components/navigation/Navigation";
import Main from './components/Main.js'
import Footer from './components/Footer/Footer.js'

function App() {
    return (
        <div className="App">
            <Navigation/>
            <Main/>
            <Footer/>
        </div>
    );
}

export default App;
