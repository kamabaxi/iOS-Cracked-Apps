//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMGeneralPageTableComponent.h"

@class NSString;

@interface FMDonaterListComponent : FMGeneralPageTableComponent
{
    long long _capacity;
    NSString *_topicId;
}

@property(copy, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
@property(nonatomic) long long capacity; // @synthesize capacity=_capacity;
- (void).cxx_destruct;
- (void)requestSuccessHandle:(id)arg1;
- (id)getParameters;
- (id)initWithTopicId:(id)arg1;
- (_Bool)isNeedLogin;
- (double)cacheTime;
- (Class)returnClass;
- (id)mtopApiVersion;
- (id)mtopApi;

@end
