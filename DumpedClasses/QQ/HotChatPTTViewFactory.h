//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQHotChatModel;

@interface HotChatPTTViewFactory : NSObject
{
    QQHotChatModel *_hotChatModel;
}

+ (id)guideView;
+ (id)sendPTTPromptPopover;
+ (id)OwnerLabel;
+ (id)guestsView;
+ (id)refreshSeatBarView:(id)arg1 withSeatArray:(id)arg2;
+ (id)InviteMemberListVCWithHotChatModel:(id)arg1;
@property(retain, nonatomic) QQHotChatModel *hotChatModel; // @synthesize hotChatModel=_hotChatModel;

@end
