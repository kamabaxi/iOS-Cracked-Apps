//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "HHHVisionDelegate.h"
#import "UIAlertViewDelegate.h"

@class HHHVision, NSMutableArray, NSString, NSTimer, TBCKCameraBottomBar, TBCKCameraProgressBar, TBCKCameraTopBar, TBCKCameraTutorialView, TBCKTipView, UILabel, UIView;

@interface TBCKCameraViewController : UIViewController <HHHVisionDelegate, UIAlertViewDelegate>
{
    TBCKCameraTutorialView *_tutorialView;
    TBCKTipView *_tipView;
    TBCKCameraTopBar *_topBar;
    UIView *_previewView;
    TBCKCameraBottomBar *_bottomBar;
    UILabel *_totalTimeLabel;
    TBCKCameraProgressBar *_segmentsView;
    long long _state;
    HHHVision *_vision;
    NSMutableArray *_segments;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableArray *segments; // @synthesize segments=_segments;
@property(retain, nonatomic) HHHVision *vision; // @synthesize vision=_vision;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) TBCKCameraProgressBar *segmentsView; // @synthesize segmentsView=_segmentsView;
@property(retain, nonatomic) UILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) TBCKCameraBottomBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) UIView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) TBCKCameraTopBar *topBar; // @synthesize topBar=_topBar;
@property(retain, nonatomic) TBCKTipView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) TBCKCameraTutorialView *tutorialView; // @synthesize tutorialView=_tutorialView;
- (void).cxx_destruct;
- (void)vision:(id)arg1 didCaptureVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)hideTutorial;
- (void)showTutorialIfNeed;
- (void)transitionToState:(long long)arg1;
- (void)visionDidChangeFlashMode:(id)arg1;
- (void)visionCameraDeviceDidChange:(id)arg1;
- (void)visionCameraDeviceWillChange:(id)arg1;
- (void)vision:(id)arg1 capturedVideo:(id)arg2 error:(id)arg3;
- (void)visionWillEndVideoCapture:(id)arg1;
- (void)visionDidStartVideoCapture:(id)arg1;
- (id)vision:(id)arg1 willStartVideoCaptureToFile:(id)arg2;
- (void)visionSessionDidStop:(id)arg1;
- (void)visionSessionDidStart:(id)arg1;
- (void)visionDidChangeAuthorizationStatus:(long long)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)_onTick;
- (void)_updateTotalTimeView;
- (void)_onShutterButtonRelease:(id)arg1;
- (void)_onShutterButtonPress:(id)arg1;
- (void)_onAccomplishButtonClick:(id)arg1;
- (void)_onDeleteButtonClick:(id)arg1;
- (void)_onFlipButtonClick:(id)arg1;
- (void)_onLightButtonClick:(id)arg1;
- (void)_close;
- (void)_onCloseButtonClick:(id)arg1;
- (void)_handleShutterLongPress:(id)arg1;
- (double)_totalDuration;
- (void)didReceiveMemoryWarning;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)_handleFocusTapGesterRecognizer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
