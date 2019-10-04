import React from 'react';
import imgsData from '../../_images.json'
import './style.scss'


class Slider extends React.Component {
    constructor(props) {
        super(props)

        this.state = {
            images: imgsData,
            currentIndex: 0,
            translateValue: 0
        }
    }

    goToPrevSlide = () => {
        if(this.state.currentIndex === 0)
            return;
        this.setState(prevState => ({
            currentIndex: prevState.currentIndex - 1,
            translateValue: prevState.translateValue + this.slideWidth()
        }))
    };

    goToNextSlide = () => {
        if(this.state.currentIndex === this.state.images.length - 1) {
            return this.setState({
                currentIndex: 0,
                translateValue: 0
            })
        }

        this.setState(prevState => ({
            currentIndex: prevState.currentIndex + 1,
            translateValue: prevState.translateValue + -(this.slideWidth())
        }));
    };

    slideWidth = () => {
        return document.querySelector('.slide').clientWidth
    };


    render() {
        console.log(this.state)
        return (
            <div className="slider">
                <div className="slider-wrapper"
                     style={{
                         transform: `translateX(${this.state.translateValue}px)`,
                         transition: 'transform ease-out 0.45s'
                     }}>
                    {
                        this.state.images.map((image, i) => {
                            return (
                                <Slide key={i} image={image}/>)
                        })
                    }
                </div>

                <LeftArrow
                    goToPrevSlide={this.goToPrevSlide}
                />

                <RightArrow
                    goToNextSlide={this.goToNextSlide}
                />
            </div>
        );
    }
}


const Slide = ({ image }) => {
    const styles = {
        backgroundImage: `url(${image})`,
        backgroundSize: 'contain',
        backgroundRepeat: 'no-repeat',
        backgroundPosition: '50% 60%'
    };
    return <div className="slide" style={styles}></div>
};


const LeftArrow = (props) => {
    return (
        <div className="backArrow arrow" onClick={props.goToPrevSlide}>
            <i className="fa fa-arrow-left fa-2x" aria-hidden="true">

            </i>
        </div>
    );
};


const RightArrow = (props) => {
    return (
        <div className="nextArrow arrow" onClick={props.goToNextSlide}>
            <i className="fa fa-arrow-right fa-2x" aria-hidden="true">

            </i>
        </div>
    );
};

export default Slider