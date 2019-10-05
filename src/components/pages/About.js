import React from 'react';
import './style.scss'

const About = () => (
    <div className={'aboutPage'}>
        <p className={'about'}>
            <div className={'aboutBg'}>
                <img src={'https://scontent.ftlv5-1.fna.fbcdn.net/v/t1.0-9/71781811_3082889758394848_5753995994580647936_n.jpg?_nc_cat=104&_nc_oc=AQn8QHct2r1eU7b7oH6B5XuVRWWDksmCXagFWJcY8FA1Fl9gCtHlLMX1IOEHMkhcKTw&_nc_ht=scontent.ftlv5-1.fna&oh=ba3bf04f9c41b22b681932a91957f865&oe=5E1F14CB'} alt={''}/>
            </div>
            <div className={'aboutContent'}>
                <span className={'firstChild'}>Highly motivated frontend developer with excellent fast learn capabilities,</span>
                <span>expertize in users oriented design, requirements and times management.</span>
                <span>Strong analytic and debug skills.</span>
                <span className={'lastChild'}>Team player with great interpersonal skills, who is ready to learn and able to operate independently.</span>
            </div>
        </p>
        <div className={'aboutInn'}>
            <div className={'education'}>
                <p><span>2018</span>
                    <b>Udemy, React Course</b>
                </p>
                <p><span>2013 - 2014</span>
                    <b>John Brice Collage, Tel-Aviv, Israel</b><br/>
                    PHP Web Expert (sites building)
                </p>
                <p><span>2011-2013</span>
                    <b>Machon Avni, Tel-Aviv, Israel</b><br/>
                    Interactive Design<br/>
                    UI/UX expertise
                </p>
            </div>
            <div className={'experience'}>
                <p><span>2018 – Today</span>
                    <b>Beehive BI, Tel Aviv, Israel </b> <br/>
                    I've experienced within agile/scrum methodology, working with functional requirements, doing the job under tough and pressure timelines.
                </p>
                <div><span>2015 – 2018</span>
                    <b>E-shop, Ness-Ziona, Israel</b><br/>
                    <ul>
                        <li>Participated in build and renovation of unified platform for simple and fast developing of the online shops.
                        </li>
                        <li>In charge of checking and integration of UI sketches. Works with project manager on design review and validation. Defines requirements for UI/UX team.</li>
                        <li>Expert in the platform back-doors implementation through jQuery capabilities.</li>
                        <li>Builds customer online shops.</li>
                    </ul>
                </div>
            </div>
            <div className={'skills'}>
                <ul>
                    <li>React, Redux, JS, Node.js, jQuery, Sass, CSS3, HTML5, Bootstrap, Media Query, W3C, Axios, Material-UI, Lodash, Moment, Yup, Local env
                    </li>
                    <li>Requirements gathering, times management</li>
                    <li>Photoshop, Illustrator, Visual studio, Dreamweaver, Webstorm, GitHub, Bitbucket, IntelliJ IDEA</li>
                    <li>Responsive development, UI/UX, flexible layouts, debug capabilities</li>
                </ul>
            </div>
        </div>
    </div>
);

export default About