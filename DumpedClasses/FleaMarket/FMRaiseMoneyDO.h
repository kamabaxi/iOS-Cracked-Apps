//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FMRaiseMoneyDO.h"

@class NSNumber, NSString;

@interface FMRaiseMoneyDO : NSObject <FMRaiseMoneyDO>
{
    NSNumber *_itemId;
    double _money;
    NSString *_organization;
    NSNumber *_userId;
    NSString *_userNick;
}

@property(copy, nonatomic) NSString *userNick; // @synthesize userNick=_userNick;
@property(retain, nonatomic) NSNumber *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *organization; // @synthesize organization=_organization;
@property(nonatomic) double money; // @synthesize money=_money;
@property(retain, nonatomic) NSNumber *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
