//
//  IntervalsViewController.h
//  TestPage
//
//  Created by MAC Book on 4/25/15.
//  Copyright (c) 2015 MAC Book. All rights reserved.
//

#ifndef TestPage_IntervalsViewController_h
#define TestPage_IntervalsViewController_h
#import <UIKit/UIKit.h>
#import "MainMenuViewController.h"
#import "HighScoreController.h"

@interface IntervalsViewController : UIViewController 

@property (strong, nonatomic) IBOutlet UILabel *problemNumberLabel;
@property (strong, nonatomic) IBOutlet UILabel *scoreLabel;


@property (strong, nonatomic) IBOutlet UIButton *backButton;
@property (strong, nonatomic) IBOutlet UIButton *playButton;
@property (strong, nonatomic) IBOutlet UIButton *nextQuestionButton;
@property (strong, nonatomic) IBOutlet UIButton *highScoreButton;

@property (strong, nonatomic) IBOutlet UIButton *majorButton;
@property (strong, nonatomic) IBOutlet UIButton *minorButton;
@property (strong, nonatomic) IBOutlet UIButton *perfectButton;
@property (strong, nonatomic) IBOutlet UIButton *octaveButton;

@property (strong, nonatomic) IBOutlet UIButton *secondButton;
@property (strong, nonatomic) IBOutlet UIButton *thirdButton;
@property (strong, nonatomic) IBOutlet UIButton *fourthButton;
@property (strong, nonatomic) IBOutlet UIButton *fifthButton;
@property (strong, nonatomic) IBOutlet UIButton *sixthButton;
@property (strong, nonatomic) IBOutlet UIButton *seventhButton;

// What the fuck is this?
@property (strong, nonatomic) id dataObject;

@property (nonatomic, assign) NSInteger score;
@property (nonatomic, assign) NSInteger problemNumber;
@property (nonatomic, assign) NSString* correctAnswer;
@property (nonatomic, assign) bool hasScoreAlreadyBeenSet;
@property (nonatomic, assign) bool hasNumberAlreadyBeenSet;

@end

#endif
