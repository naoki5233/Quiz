//
//  QuizViewController.h
//  Quiz
//
//  Created by edu222 on 3/6/13.
//  Copyright (c) 2013 com.educalvachi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface QuizViewController : UIViewController
{
    int currentQuestionIndex;
    
    //The Model Objects
    NSMutableArray *questions;
    NSMutableArray *answers;
    
    //The View Objects
    IBOutlet UILabel *questionField;
    IBOutlet UILabel *answerField;
    
}

-(IBAction)showQuestion:(id)sender;
-(IBAction)ShowAnswer:(id)sender;

@end
