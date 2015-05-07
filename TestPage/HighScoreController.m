//
//  HighScoreController.m
//  TestPage
//
//  Created by Jeff Gong on 4/28/15.
//  Copyright (c) 2015 MAC Book. All rights reserved.
//

#import "HighScoreController.h"
#import <Foundation/Foundation.h>
@import AVFoundation;

@interface HighScoreController () {
}

@end

@implementation HighScoreController

@synthesize score;
@synthesize backButton;

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    self.scoreLabel.text = [NSString stringWithFormat:@"%ld", score];
    [self saveToUserDefaults:score];
}

- (void)saveToUserDefaults:(NSInteger) bestScore {
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    if (defaults) {
        NSNumber *currHighest = [defaults objectForKey:@"myKey"];
        NSInteger currHighestInt = [currHighest intValue];
        if (score > currHighest) {
            [defaults setObject:[NSNumber numberWithInt:score] forKey:@"myKey"];
            [defaults synchronize];
        }
    }
}

-(IBAction)touchUpInside:(UIButton*)sender {
}

@end
