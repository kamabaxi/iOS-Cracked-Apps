//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTFlightDetailBaseSender.h"

@interface CTFlightDetailReturnSender : CTFlightDetailBaseSender
{
}

+ (id)getInstance;
- (id)sendCommInvoiceTitleSearch:(id)arg1;
- (id)sendOrderDeliveryTypeSearchReturnWithFlightDetailReturnCacheBean:(id)arg1 selectedReturnPolicyModel:(id)arg2 uuid:(id)arg3;
- (id)sendOrderCombineSearchReturnWithFlightDetailReturnCacheBean:(id)arg1 selectedReturnPolicyModel:(id)arg2 uuid:(id)arg3 messageToken:(id)arg4;

@end

