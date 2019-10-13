import React from 'react';
import './style.scss'

const About = () => (
    <div className={'aboutPage'}>
        <div className={'aboutIntro'}>
            <div className={'aboutIntroInn'}>
                <div className={'aboutIntroBg'}>
                    <img src={'https://scontent.ftlv5-1.fna.fbcdn.net/v/t1.0-9/71781811_3082889758394848_5753995994580647936_n.jpg?_nc_cat=104&_nc_oc=AQn8QHct2r1eU7b7oH6B5XuVRWWDksmCXagFWJcY8FA1Fl9gCtHlLMX1IOEHMkhcKTw&_nc_ht=scontent.ftlv5-1.fna&oh=ba3bf04f9c41b22b681932a91957f865&oe=5E1F14CB'} alt={''}/>
                </div>
                <div className={'aboutIntroContent'}>
                    <h3>Who am I?</h3>
                    <span className={'firstChild'}>Highly motivated frontend developer with excellent fast learn capabilities,</span>
                    <span>expertize in users oriented design, requirements and times management.</span>

                    <span className={'lastChild'}>Team player with great interpersonal skills, who is ready to learn and able to operate independently.</span>
                </div>
            </div>
            <div className={'skills'}>
                <h2>Skills</h2>
                <div className={'skillsInn'}>
                    <div className={'skillsLang'}>
                        <span>React</span><span> Redux</span><span> JS</span><span> Node.js</span><span> jQuery</span><span> Sass</span><span> CSS3</span><span> HTML5</span><span> Bootstrap</span><span> Media Query</span><span> W3C</span><span> Axios</span><span> Material-UI</span><span> Lodash</span><span> Moment</span><span> Yup</span><span> Local env</span>
                    </div>

                    <div className={'skillsProgs'}>
                        <span>Photoshop</span><span>Illustrator</span><span>Visual studio</span><span>Dreamweaver</span><span>Webstorm</span><span>GitHub</span><span>Bitbucket</span><span>IntelliJ IDEA</span></div>
                    <div><span>Responsive development</span><span>Flexible layouts</span><span>Debug capabilities</span></div>
                    <div><span>Requirements gathering</span><span>Times management</span><span>Strong analytic and debug skills.</span></div>

                </div>

            </div>
        </div>

        <div className={'aboutInn'}>
            <div className={'education'}>
                <h2><span>Education</span></h2>
                <div className={'educationWrapper'}>
                    <div>

                        <span className={'bgPicUdemy'}><span>2018</span></span>
                        <div>

                            <b>Udemy, React Course</b>
                        </div>
                    </div>

                    <div>

                        <span className={'bgPicJohnB'}><span>2013 - 2014</span></span>
                        <div>

                            <b>John Brice Collage, Tel-Aviv, Israel</b><br/>
                            PHP Web Expert (sites building)
                        </div>
                    </div>
                    <div>

                        <span className={'bgPicAvni'}><span>2011-2013</span></span>
                        <div>
                            <b>Machon Avni, Tel-Aviv, Israel</b><br/>
                            Interactive Design<br/>
                            UI/UX expertise
                        </div>
                    </div>
                </div>
            </div>
            <div className={'experience'}>
                <h2><span>Experience</span></h2>
                <div className={'experienceInn'}>
                    <div>
                    <div className={'bgPicBeehive'}>
                    <span>2018 – Today</span>
                    </div>
                    <p>
                        <b>Beehive BI, Tel Aviv, Israel </b>
                    I've experienced within agile/scrum methodology, working with functional requirements, doing the job under tough and pressure timelines.</p>
                    </div>
                    <div>
                        <div className={'bgPicEshop'}>
                            <span>2015 – 2018</span>
                        </div>
                        <p>
                            <b>E-shop, Ness-Ziona, Israel</b>
                            <ul>
                                <li>Participated in build and renovation of unified platform for simple and fast developing of the online shops.
                                </li>
                                <li>In charge of checking and integration of UI sketches. Works with project manager on design review and validation. Defines requirements for UI/UX team.</li>
                                <li>Expert in the platform back-doors implementation through jQuery capabilities.</li>
                                <li>Builds customer online shops.</li>
                            </ul>
                        </p>
                    </div>
                </div>
            </div>
        </div>
        <div className={'linkToGit'}>Link to project in gitHub: <a href="https://github.com/kirakZaz/KZ_port">Check my code here...</a></div>
    </div>
);

export default About