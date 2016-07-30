//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsUIKit/NCNotificationListViewController.h>

#import <UserNotificationsUIKit/NCNotificationListSectionHeaderViewDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationSectionListDelegate-Protocol.h>
#import <UserNotificationsUIKit/UIGestureRecognizerDelegate-Protocol.h>

@class NCNotificationListSectionHeaderView, NSMutableSet, NSString;
@protocol NCNotificationSectionList;

@interface NCNotificationSectionListViewController : NCNotificationListViewController <NCNotificationSectionListDelegate, NCNotificationListSectionHeaderViewDelegate, UIGestureRecognizerDelegate>
{
    id <NCNotificationSectionList> _sectionList;
    NCNotificationListSectionHeaderView *_headerViewInClearState;
    NCNotificationListSectionHeaderView *_headerViewInForceTouchState;
    NSMutableSet *_hiddenMessagePreviewSections;
}

@property(retain, nonatomic) NSMutableSet *hiddenMessagePreviewSections; // @synthesize hiddenMessagePreviewSections=_hiddenMessagePreviewSections;
@property(nonatomic) __weak NCNotificationListSectionHeaderView *headerViewInForceTouchState; // @synthesize headerViewInForceTouchState=_headerViewInForceTouchState;
@property(nonatomic) __weak NCNotificationListSectionHeaderView *headerViewInClearState; // @synthesize headerViewInClearState=_headerViewInClearState;
@property(retain, nonatomic) id <NCNotificationSectionList> sectionList; // @synthesize sectionList=_sectionList;
- (void).cxx_destruct;
- (void)_clearCachedSizesForNotificationSectionIdentifier:(id)arg1;
- (void)sectionHeaderViewDidDismissForceTouchView:(id)arg1;
- (void)sectionHeaderViewDidPresentForceTouchView:(id)arg1;
- (void)sectionHeaderViewDidReceiveClearAllAction:(id)arg1;
- (void)sectionHeaderView:(id)arg1 didReceiveClearActionForSectionIdentifier:(id)arg2;
- (void)sectionHeaderViewDidTransitionToClearState:(id)arg1;
- (void)notificationSectionListNeedsReload:(id)arg1;
- (void)notificationSectionList:(id)arg1 didRemoveSectionsAtIndices:(id)arg2;
- (void)notificationSectionList:(id)arg1 didRemoveSectionAtIndex:(unsigned long long)arg2;
- (void)notificationSectionList:(id)arg1 didInsertSectionAtIndex:(unsigned long long)arg2;
- (void)notificationSectionList:(id)arg1 requestsReloadAtIndices:(id)arg2;
- (void)notificationSectionList:(id)arg1 didRemoveNotificationRequest:(id)arg2 atIndexPath:(id)arg3;
- (void)notificationSectionList:(id)arg1 didReplaceNotificationRequest:(id)arg2 atIndexPath:(id)arg3;
- (void)notificationSectionList:(id)arg1 didInsertNotificationRequest:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)notificationViewControllerShouldInterpretTapAsDefaultAction:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)handleEatenTouchEndStateForGestureRecognizer:(id)arg1;
- (void)handleEatenTouchBeginStateForGestureRecognizer:(id)arg1;
- (_Bool)shouldReceiveTouch:(id)arg1 forGestureRecognizer:(id)arg2;
- (_Bool)dismissModalFullScreenIfNeeded;
- (id)notificationRequestAtIndexPath:(id)arg1;
- (_Bool)hasContent;
- (void)showMessagePreviewForNotificationSectionIdentifier:(id)arg1;
- (void)hideMessagePreviewForNotificationSectionIdentifier:(id)arg1;
- (void)showRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (void)hideRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (void)removeNotificationRequest:(id)arg1;
- (void)modifyNotificationRequest:(id)arg1;
- (void)insertNotificationRequest:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
