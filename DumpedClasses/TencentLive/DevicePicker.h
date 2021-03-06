//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DiscoveryManagerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIPopoverControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ConnectableDevice, NSArray, NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, UIActionSheet, UINavigationController, UIPopoverController, UITableViewController, UIView;

@interface DevicePicker : NSObject <DiscoveryManagerDelegate, UIPopoverControllerDelegate, UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate>
{
    NSArray *_generatedDeviceList;
    NSArray *_actionSheetDeviceList;
    NSMutableDictionary *_devices;
    UINavigationController *_navigationController;
    UITableViewController *_tableViewController;
    UIActionSheet *_actionSheet;
    UIView *_actionSheetTargetView;
    UIPopoverController *_popover;
    NSDictionary *_popoverParams;
    NSObject<OS_dispatch_queue> *_sortQueue;
    _Bool _showServiceLabel;
    _Bool _shouldAnimatePicker;
    _Bool _shouldAutoRotate;
    id <DevicePickerDelegate> _delegate;
    ConnectableDevice *_currentDevice;
}

@property(nonatomic) __weak ConnectableDevice *currentDevice; // @synthesize currentDevice=_currentDevice;
@property(nonatomic) _Bool shouldAutoRotate; // @synthesize shouldAutoRotate=_shouldAutoRotate;
@property(nonatomic) _Bool shouldAnimatePicker; // @synthesize shouldAnimatePicker=_shouldAnimatePicker;
@property(nonatomic) __weak id <DevicePickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)discoveryManager:(id)arg1 didUpdateDevice:(id)arg2;
- (void)discoveryManager:(id)arg1 didLoseDevice:(id)arg2;
- (void)discoveryManager:(id)arg1 didFindDevice:(id)arg2;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)actionSheetCancel:(id)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleRotation;
- (id)nameForDevice:(id)arg1;
- (void)sortDevices;
- (void)cleanupViews;
- (void)dismissPicker:(id)arg1;
- (void)showNavigation;
- (void)showActionSheet:(id)arg1;
- (void)showPopover:(id)arg1;
- (void)showPicker:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

