//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, RequestHead;

@interface HotelBusinessActiveListRequest : CTBusinessBean
{
    int _serviceVersion;
    int _cityId;
    int _mapType;
    int _hotelType;
    int _sourceType;
    RequestHead *_head;
    NSString *_longitude;
    NSString *_latitude;
    NSString *_cityName;
}

@property(copy, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(nonatomic) int sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) int hotelType; // @synthesize hotelType=_hotelType;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(nonatomic) int mapType; // @synthesize mapType=_mapType;
@property(nonatomic) int cityId; // @synthesize cityId=_cityId;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion=_serviceVersion;
@property(retain, nonatomic) RequestHead *head; // @synthesize head=_head;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

