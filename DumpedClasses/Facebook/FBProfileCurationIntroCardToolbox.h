//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBProfileCoverAreaToolbox-Protocol.h"
#import "FBProfileIntroCardFeaturedPhotosComponentToolbox-Protocol.h"

@class FBFeedToolbox, FBPersonTimelineTapResponder, FBProfileCoverPhotoComponentUploadListenerAnnouncer, FBProfileCurationIntroCardTapEventListenerAnnouncer, FBProfileIntroCardFeaturedPhotosComponentResponder, FBProfilePictureComponentStatusListenerAnnouncer, FBProfileVideoComponentToolbox, FBUserSession, NSString;
@protocol FBNavigationCoordinator, FBProfileCoverPhotoComponentTapHandler;

@interface FBProfileCurationIntroCardToolbox : NSObject <FBProfileCoverAreaToolbox, FBProfileIntroCardFeaturedPhotosComponentToolbox>
{
    NSString *_analyticsUUID;
    FBProfileIntroCardFeaturedPhotosComponentResponder *_profileIntroCardFeaturedPhotosComponentResponder;
    id <FBNavigationCoordinator> _navigationCoordinator;
    FBFeedToolbox *_feedToolbox;
    FBProfileVideoComponentToolbox *_profileVideoComponentToolbox;
    FBProfileCoverPhotoComponentUploadListenerAnnouncer *_profileCoverPhotoComponentUploadListenerAnnouncer;
    NSString *_analyticsModule;
    FBProfilePictureComponentStatusListenerAnnouncer *_profilePictureComponentStatusListenerAnnouncer;
    FBUserSession *_session;
    NSObject *_scenePath;
    FBPersonTimelineTapResponder *_profileTapResponder;
    FBProfileCurationIntroCardTapEventListenerAnnouncer *_curationIntroCardTapEventListenerAnnouncer;
}

@property(readonly, nonatomic) FBProfileCurationIntroCardTapEventListenerAnnouncer *curationIntroCardTapEventListenerAnnouncer; // @synthesize curationIntroCardTapEventListenerAnnouncer=_curationIntroCardTapEventListenerAnnouncer;
@property(readonly, nonatomic) FBPersonTimelineTapResponder *profileTapResponder; // @synthesize profileTapResponder=_profileTapResponder;
@property(readonly, nonatomic) NSObject *scenePath; // @synthesize scenePath=_scenePath;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) FBProfilePictureComponentStatusListenerAnnouncer *profilePictureComponentStatusListenerAnnouncer; // @synthesize profilePictureComponentStatusListenerAnnouncer=_profilePictureComponentStatusListenerAnnouncer;
@property(readonly, copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(readonly, nonatomic) FBProfileCoverPhotoComponentUploadListenerAnnouncer *profileCoverPhotoComponentUploadListenerAnnouncer; // @synthesize profileCoverPhotoComponentUploadListenerAnnouncer=_profileCoverPhotoComponentUploadListenerAnnouncer;
@property(readonly, nonatomic) FBProfileVideoComponentToolbox *profileVideoComponentToolbox; // @synthesize profileVideoComponentToolbox=_profileVideoComponentToolbox;
@property(readonly, nonatomic) FBFeedToolbox *feedToolbox; // @synthesize feedToolbox=_feedToolbox;
@property(readonly, nonatomic) id <FBNavigationCoordinator> navigationCoordinator; // @synthesize navigationCoordinator=_navigationCoordinator;
@property(readonly, nonatomic) FBProfileIntroCardFeaturedPhotosComponentResponder *profileIntroCardFeaturedPhotosComponentResponder; // @synthesize profileIntroCardFeaturedPhotosComponentResponder=_profileIntroCardFeaturedPhotosComponentResponder;
@property(readonly, copy, nonatomic) NSString *analyticsUUID; // @synthesize analyticsUUID=_analyticsUUID;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <FBProfileCoverPhotoComponentTapHandler> profileCoverPhotoComponentTapHandler;
- (id)initWithSession:(id)arg1 scenePath:(id)arg2 analyticsModule:(id)arg3 analyticsUUID:(id)arg4 navigationCoordinator:(id)arg5 profileTapResponder:(id)arg6 curationIntroCardTapEventListenerAnnouncer:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
