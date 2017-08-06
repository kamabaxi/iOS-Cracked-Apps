//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DCNumberSelectVModel : NSObject
{
    long long _maxCount;
    long long _maxCanSelect;
    NSString *_unit;
    long long _minCount;
    long long _selectIndex;
}

+ (id)getDefaultDriverModel;
+ (id)getDefaultPassengerModel;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(nonatomic) long long minCount; // @synthesize minCount=_minCount;
@property(copy, nonatomic) NSString *unit; // @synthesize unit=_unit;
@property(nonatomic) long long maxCount; // @synthesize maxCount=_maxCount;
- (void).cxx_destruct;
@property(nonatomic) long long maxCanSelect; // @synthesize maxCanSelect=_maxCanSelect;
- (id)init;

@end
