//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UITapGestureRecognizer;
@protocol FBComposerSproutControlEventsListener;

@interface FBComposerSproutSheetBackgroundTapGestureRecognizerView : UIView <UIGestureRecognizerDelegate>
{
    UIView *_backgroundTouchView;
    id <FBComposerSproutControlEventsListener> _controlEventsListener;
    UIView *_containedView;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

- (void).cxx_destruct;
- (void)_setUpBackgroundTappingGestureRecognizer;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)dealloc;
- (id)initWithContainedView:(id)arg1 backgroundTouchView:(id)arg2 controlEventsListener:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
