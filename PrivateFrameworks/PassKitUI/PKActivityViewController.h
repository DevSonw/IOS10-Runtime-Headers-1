//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKSectionTableViewController.h>

@class NSArray, UIRefreshControl;

@interface PKActivityViewController : PKSectionTableViewController
{
    UIRefreshControl *_refreshControl;
    _Bool _refreshing;
    _Bool _visible;
    NSArray *_events;
    NSArray *_additionalEvents;
}

- (void).cxx_destruct;
- (void)refresh:(id)arg1;
- (void)_updateRefreshControl;
- (void)_mergeEvents:(id)arg1;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)shouldMapSection:(unsigned long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)title;
- (void)dealloc;
- (id)init;
- (id)initWithStyle:(long long)arg1 numberOfSections:(unsigned long long)arg2;

@end

