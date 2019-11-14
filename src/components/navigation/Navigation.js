import React from 'react';
import { Link } from "react-router-dom";
import './style.scss'

export class Navigation extends React.Component{

    render() {
        return (
            <div className={'navigation'}>
                <div className={'logo'}>KZ</div>
                <ul>
                    <li><Link to="/" className={'home'}><span>Home</span></Link></li>
                    <li><Link to="/about" className={'about'}><span>About</span></Link></li>
                    <li><Link to="/contact" className={'contact'}><span>Contact</span></Link></li>
                </ul>
                <ul className={'social'}>
                    <li><a href="https://www.facebook.com/campaign/landing.php?&campaign_id=1635585115&extra_1=s|c|314899114033|e|facebook|&placement=&creative=314899114033&keyword=facebook&partner_id=googlesem&extra_2=campaignid%3D1635585115%26adgroupid%3D63029865496%26matchtype%3De%26network%3Dg%26source%3Dnotmobile%26search_or_content%3Ds%26device%3Dc%26devicemodel%3D%26adposition%3D1t1%26target%3D%26targetid%3Dkwd-541132862%26loc_physical_ms%3D1007985%26loc_interest_ms%3D%26feeditemid%3D%26param1%3D%26param2%3D&gclid=CjwKCAiAqqTuBRBAEiwA7B66hVH1rdh4GWxMNLD0G_6lFYivi5RJlsSw1rqpa2VxWkU48_a5aCHOAxoCG24QAvD_BwE" className={'facebook'}><span>facebook</span></a></li>
                    <li><a className={'linkedIn'} href="https://www.linkedin.com/in/kira-zakirova-4bbb04a9/"><span>linkedIn</span></a></li>
                    <li><a className={'gitHub'} href="https://github.com/kirakZaz/kz-port"><span>gitHub</span></a></li>
                </ul>
            </div>
        );
    }
}

export default Navigation