//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, PTHTweetbotSearchTableViewController, UITableView;

@protocol PTHTweetbotSearchTableViewDelegate <NSObject>

@optional
- (_Bool)searchTableViewControllerShouldHideNavigationBar:(PTHTweetbotSearchTableViewController *)arg1;
- (_Bool)searchTableViewController:(PTHTweetbotSearchTableViewController *)arg1 shouldReloadTableForSearchString:(NSString *)arg2;
- (void)searchTableViewController:(PTHTweetbotSearchTableViewController *)arg1 didHideSearchResultsTableView:(UITableView *)arg2;
- (void)searchTableViewController:(PTHTweetbotSearchTableViewController *)arg1 willHideSearchResultsTableView:(UITableView *)arg2;
- (void)searchTableViewController:(PTHTweetbotSearchTableViewController *)arg1 didShowSearchResultsTableView:(UITableView *)arg2;
- (void)searchTableViewController:(PTHTweetbotSearchTableViewController *)arg1 willShowSearchResultsTableView:(UITableView *)arg2;
- (void)searchTableViewController:(PTHTweetbotSearchTableViewController *)arg1 didLoadSearchResultsTableView:(UITableView *)arg2;
- (void)searchTableViewController:(PTHTweetbotSearchTableViewController *)arg1 reloadData:(UITableView *)arg2;
- (void)searchTableViewControllerDidEndSearch:(PTHTweetbotSearchTableViewController *)arg1;
- (void)searchTableViewControllerWillEndSearch:(PTHTweetbotSearchTableViewController *)arg1;
- (void)searchTableViewControllerDidBeginSearch:(PTHTweetbotSearchTableViewController *)arg1;
- (void)searchTableViewControllerWillBeginSearch:(PTHTweetbotSearchTableViewController *)arg1;
@end

