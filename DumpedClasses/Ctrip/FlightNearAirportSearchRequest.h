//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface FlightNearAirportSearchRequest : CTBusinessBean
{
    int serviceVersion;
    NSString *latitude;
    NSString *longitude;
}

@property(copy, nonatomic) NSString *longitude; // @synthesize longitude;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

