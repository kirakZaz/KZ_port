import React from 'react';
import { Link } from "react-router-dom";

const Home = () => (
    <div className={'homePage'}>
        <p className={'me'}>
            {/*<img src={'https://scontent-lht6-1.xx.fbcdn.net/v/t1.0-9/582310_590646340952548_1471724189_n.jpg?_nc_cat=111&_nc_oc=AQna5ihVkG85XMrnq0inLuud5Tq1-aQdrFgl-BcKtrfST3sZfSM6ceEp0kc49EGm-Y8&_nc_ht=scontent-lht6-1.xx&oh=d4aa59060c4c59a35c4e842dcd0381cd&oe=5E27B2F3'} alt={''}/>*/}
            <span className={'darkness'}> </span>
        </p>
        <div className={'hello'}>
            <p>Hello, my name is <span>Kira Zakirova</span> and I am a Front End Developer.</p>
            <div><Link className={'homeLink'} to={"/about"}>Check it out...</Link></div>
        </div>
    </div>
);

export default Home