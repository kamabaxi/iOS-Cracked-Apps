//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MQQBaseViewController, MQQMobileCenterSidebarController;

@protocol MQQMobileCenterSidebarControllerDelegate <NSObject>

@optional
- (void)sidebarController:(MQQMobileCenterSidebarController *)arg1 didHideViewController:(MQQBaseViewController *)arg2;
- (void)sidebarController:(MQQMobileCenterSidebarController *)arg1 willHideViewController:(MQQBaseViewController *)arg2;
- (void)sidebarController:(MQQMobileCenterSidebarController *)arg1 didShowViewController:(MQQBaseViewController *)arg2;
- (void)sidebarController:(MQQMobileCenterSidebarController *)arg1 willShowViewController:(MQQBaseViewController *)arg2;
@end

