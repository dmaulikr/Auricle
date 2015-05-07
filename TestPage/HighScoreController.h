//
//  HighScoreController.h
//  TestPage
//
//  Created by Jeff Gong on 4/28/15.
//  Copyright (c) 2015 MAC Book. All rights reserved.
//

#ifndef TestPage_HighScoreController_h
#define TestPage_HighScoreController_h
#import <UIKit/UIKit.h>
#import "MainMenuViewController.h"

@interface HighScoreController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *scoreLabel;

@property (strong, nonatomic) IBOutlet UIButton *backButton;
@property (strong, nonatomic) IBOutlet UIButton *homeButton;
@property (strong, nonatomic) IBOutlet UIButton *viewHighScoresButton;

@property (nonatomic, assign) NSInteger score;
@property (nonatomic, assign) NSInteger highestScore;

-(void)saveToUserDefaults;

@end

#endif
