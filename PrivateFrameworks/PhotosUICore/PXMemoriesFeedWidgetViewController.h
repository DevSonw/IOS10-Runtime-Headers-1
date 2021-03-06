//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXMemoriesFeedViewControllerHelperDelegate-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXUserInterfaceFeatureViewController-Protocol.h>

@class NSMutableSet, NSString, PHCachingImageManager, PHImageRequestOptions, PXBasicUIViewTileAnimator, PXMemoriesFeedViewControllerHelper, PXMemoriesUITileSource, PXUIScrollViewController, PXUITapGestureRecognizer;
@protocol PXMemoriesFeedWidgetViewControllerDelegate;

@interface PXMemoriesFeedWidgetViewController : UIViewController <PXChangeObserver, PXSectionedDataSourceManagerObserver, PXUserInterfaceFeatureViewController, PXMemoriesFeedViewControllerHelperDelegate>
{
    NSMutableSet *_checkedOutTiles;
    CDUnknownBlockType _refreshMemoriesCompletionHandler;
    long long _waitForDataSourceChangeRequestDismissalID;
    _Bool _hasAnyMemories;
    id <PXMemoriesFeedWidgetViewControllerDelegate> _delegate;
    PXMemoriesFeedViewControllerHelper *__helper;
    PXMemoriesUITileSource *__tileSource;
    PXBasicUIViewTileAnimator *__tileAnimator;
    PXUIScrollViewController *__scrollViewController;
    PHCachingImageManager *__imageManager;
    PXUITapGestureRecognizer *__tapRecognizer;
    PHImageRequestOptions *__assetImageRequestOptions;
    long long __requestDismissalID;
}

@property(nonatomic, setter=_setRequestDismissalID:) long long _requestDismissalID; // @synthesize _requestDismissalID=__requestDismissalID;
@property(readonly, nonatomic) PHImageRequestOptions *_assetImageRequestOptions; // @synthesize _assetImageRequestOptions=__assetImageRequestOptions;
@property(readonly, nonatomic) PXUITapGestureRecognizer *_tapRecognizer; // @synthesize _tapRecognizer=__tapRecognizer;
@property(readonly, nonatomic) PHCachingImageManager *_imageManager; // @synthesize _imageManager=__imageManager;
@property(readonly, nonatomic) PXUIScrollViewController *_scrollViewController; // @synthesize _scrollViewController=__scrollViewController;
@property(readonly, nonatomic) PXBasicUIViewTileAnimator *_tileAnimator; // @synthesize _tileAnimator=__tileAnimator;
@property(readonly, nonatomic) PXMemoriesUITileSource *_tileSource; // @synthesize _tileSource=__tileSource;
@property(readonly, nonatomic) PXMemoriesFeedViewControllerHelper *_helper; // @synthesize _helper=__helper;
@property(nonatomic) _Bool hasAnyMemories; // @synthesize hasAnyMemories=_hasAnyMemories;
@property(nonatomic) __weak id <PXMemoriesFeedWidgetViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleSpecChange;
- (void)_handleDataSourceChange;
- (void)_handleNewMemoriesRequestFinishedWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_handleNewMemoriesRequestTimeoutWithRequestDismissalID:(long long)arg1;
- (void)_callRefreshMemoriesCompletionHandlerWithResult:(unsigned long long)arg1;
- (long long)_incrementRequestDismissalID;
- (id)_memoryObjectReferenceForPhotosDetailsContext:(id)arg1;
- (void)_handleScrollViewTap:(id)arg1;
- (id)_layoutGenerator;
- (id)_dataSourceManager;
- (void)refreshMemoriesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)invalidateNumberOfRows;
- (void)_updatePreferredContentSize;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)memoriesFeedViewControllerHelper:(id)arg1 configureMetrics:(id)arg2;
- (id)memoriesFeedViewControllerHelperReloadedTileKindsOnObjectChanged:(id)arg1;
@property(readonly, nonatomic) long long userInterfaceFeature;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

