//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBProfileWizardViewController.h"

#import "FBProfileFeaturedPhotosEditViewControllerDelegate-Protocol.h"
#import "FBProfileWizardIntroCardFeaturedPhotosUpdateViewDelegate-Protocol.h"

@class FBProfileWizardIntroCardFeaturedPhotosUpdateView, NSString;

@interface FBProfileWizardIntroCardFeaturedPhotosUpdateViewController : FBProfileWizardViewController <FBProfileWizardIntroCardFeaturedPhotosUpdateViewDelegate, FBProfileFeaturedPhotosEditViewControllerDelegate>
{
    FBProfileWizardIntroCardFeaturedPhotosUpdateView *_featuredPhotosUpdateView;
    _Bool _featuredPhotosHasUpdated;
}

- (void).cxx_destruct;
- (void)featuredPhotosHasSuccessfuallyEdited;
- (void)didTapAddFeaturedPhotosButton;
- (void)goToNextStep;
- (void)didTapSkip;
- (id)analyticsModule;
- (_Bool)CONTACT_APP_EXPERIENCE_BEFORE_OVERRIDING_fb_shouldBeginSwipeBackAtPoint:(struct CGPoint)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithProfileWizardModel:(id)arg1 currentStepIndex:(unsigned long long)arg2 person:(id)arg3 session:(id)arg4 referralType:(id)arg5 referralID:(id)arg6;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
