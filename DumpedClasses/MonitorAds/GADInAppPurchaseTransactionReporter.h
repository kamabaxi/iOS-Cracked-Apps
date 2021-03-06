//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SKPaymentTransactionObserver-Protocol.h"

@class NSString;

@interface GADInAppPurchaseTransactionReporter : NSObject <SKPaymentTransactionObserver>
{
    BOOL _reportingEnabled;
    BOOL _wasDisabled;
}

+ (id)sharedInstance;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)reportTransactionsFromArray:(id)arg1 sharedParameters:(id)arg2;
- (void)reportTransactionsFromArray:(id)arg1;
- (BOOL)wasDisabled;
@property(readonly, nonatomic) BOOL shouldBeEnabled;
- (void)disableReporting;
- (void)enableReporting;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

