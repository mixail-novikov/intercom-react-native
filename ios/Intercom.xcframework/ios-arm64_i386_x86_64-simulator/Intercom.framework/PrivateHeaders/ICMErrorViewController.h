//
//  ICMErrorViewController.h
//  IntercomSDK
//
//  Created by Roland Gropmair on 12/11/2014.
//  Copyright (c) 2014 Intercom. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol ICMErrorViewDelegate;

@interface ICMErrorViewController : UIViewController

@property (nonatomic, weak) id <ICMErrorViewDelegate> errorDelegate;

- (instancetype)initWithTitle:(NSString *)title showActionButton:(BOOL)showRetryButton;
- (instancetype)initWithTitle:(NSString *)title showActionButton:(BOOL)showRetryButton actionButtonTitle:(NSString *)retryButtonTitle;

@end
