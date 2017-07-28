//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NVMBookingFood;

@protocol NVMCartDataDelegate <NSObject>
@property(readonly, nonatomic) _Bool isWantToBeVIP;
- (NSArray *)flashSellFoodsForRestaurant:(NSString *)arg1;
- (_Bool)shouldShowNewRetailRedNote;
- (NSArray *)restaurantIDsInCart;
- (NSString *)cartPromotionTimesHint;
- (NSArray *)calculatedFoodsInCartForRestaurantID:(NSString *)arg1;
- (double)boxesFeeOfFoodsInCartForRestaurant:(NSString *)arg1;
- (NSArray *)foodsToCheckoutForRestaurant:(NSString *)arg1;
- (void)batchedUpdateForRestaurant:(NSString *)arg1 withAction:(void (^)(void))arg2;
- (void)syncFoodsIncartWithCartSpecFood:(NSArray *)arg1 restaurantID:(NSString *)arg2 foodChangeHandler:(void (^)(_Bool))arg3;
- (unsigned long long)quantityOfFood:(NSString *)arg1 skuID:(NSString *)arg2 attributes:(NSArray *)arg3 inRestaurant:(NSString *)arg4;
- (NSArray *)foodWithQuantitysInCartForRestaurant:(NSString *)arg1;
- (unsigned long long)quantityOfFoodInRestaurant:(NSString *)arg1;
- (void)clearMultiFoods:(NSArray *)arg1 forRestaurant:(NSString *)arg2;
- (void)clearFoodsInCartForRestaurant:(NSString *)arg1;
- (void)decreaseFood:(NSString *)arg1 skuID:(NSString *)arg2 attributes:(NSArray *)arg3 inRestaurant:(NSString *)arg4 decrement:(unsigned long long)arg5;
- (void)clearFood:(NSString *)arg1 skuID:(NSString *)arg2 inRestaurant:(NSString *)arg3;
- (void)addFood:(NVMBookingFood *)arg1 withIncrement:(long long)arg2;
- (id <NVMCartCalculatedData>)currentCartCalculatedData;
- (void)setCartDataSubscriber:(id <NVMCartDataSubscriber>)arg1;
- (id <NVMCartContextDataSource>)currentCartContext;
- (void)updateCartContext:(id <NVMCartContextDataSource>)arg1;
@end
