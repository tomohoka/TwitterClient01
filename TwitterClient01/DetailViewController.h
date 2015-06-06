//
//  DetailViewController.h
//  TwitterClient01
//
//  Created by 穂苅智哉 on 5/29/15.
//  Copyright (c) 2015 Tomoya Hokari. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Accounts/Accounts.h>
#import <Social/Social.h>

@interface DetailViewController : UIViewController

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, strong) UIImage *image;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *idStr;

@end
