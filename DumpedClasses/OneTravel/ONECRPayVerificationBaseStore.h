//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ONECRPayVerifyComponmentParams;

@interface ONECRPayVerificationBaseStore : NSObject
{
}

+ (void)requestPayChannelListWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
+ (id)sharedInstance;
@property(readonly, nonatomic) ONECRPayVerifyComponmentParams *params;
- (id)payVerificationHintMsgWithStatus:(_Bool)arg1;
- (void)handlePayVerificationResponse:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)handleBindUrlResponse:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (id)additionalParams;
- (id)opType;
- (id)channelId;
- (id)productLine;
- (void)requestPayVerificationWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)requestBindUrlWithSuccessBlock:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;

@end

