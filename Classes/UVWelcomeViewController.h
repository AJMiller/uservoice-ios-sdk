//
//  UVWelcomeViewController.h
//  UserVoice
//
//  Created by UserVoice on 12/15/09.
//  Copyright 2009 UserVoice Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UVBaseViewController.h"

@class UVForum;
@class UVQuestion;

@interface UVWelcomeViewController : UVBaseViewController <UITableViewDelegate, UITableViewDataSource> {
	UVForum *_forum;
	UVQuestion *_question;
	NSArray *_questions;
}

@property (nonatomic, retain) UVForum *forum;
@property (nonatomic, retain) UVQuestion *question;
@property (nonatomic, retain) NSArray *questions;

@end