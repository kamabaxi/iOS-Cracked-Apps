//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DGPNetworkEngine : NSObject
{
}

+ (id)fetchZstandardDic;
+ (id)fetchTrafficListWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)fetchTrafficListWithCityId:(id)arg1 destinationModel:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)fetchTransferEtaListWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)fetchTransferEtaListWithOriginPoiModel:(id)arg1 destinationModel:(id)arg2 cityID:(id)arg3 buses:(id)arg4 departuretime:(double)arg5 callbackSnapshot:(id)arg6 callbackPosition:(id)arg7 completion:(CDUnknownBlockType)arg8;
+ (id)searchTransferSolutionListWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)searchTransferSolutionListWithOriginPoiModel:(id)arg1 destinationModel:(id)arg2 searchOptions:(unsigned long long)arg3 departuretime:(double)arg4 callbackID:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)sugSearchRecommendWithFilterType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)userGuideWithCompletion:(CDUnknownBlockType)arg1;
+ (void)unLockWaitPublicWithLineId:(id)arg1 activityId:(id)arg2 cityId:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)waitPublicStatusWithCompletion:(CDUnknownBlockType)arg1;
+ (void)uploadRealTimeLogWithTypeStr:(id)arg1 contentStr:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
