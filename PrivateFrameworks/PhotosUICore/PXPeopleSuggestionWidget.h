//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>
#import <PhotosUICore/PXWidget-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, PHManualFetchResult, PXSectionedSelectionManager, PXTilingController, PXWidgetSpec, UIButton, UITapGestureRecognizer, UIView;
@protocol OS_dispatch_queue, PXAnonymousView, PXWidgetDelegate;

@interface PXPeopleSuggestionWidget : NSObject <PXPhotoLibraryUIChangeObserver, PXWidget>
{
    _Bool _fetchingSuggestion;
    id <PXWidgetDelegate> _widgetDelegate;
    id _context;
    UIView *_containerView;
    UIButton *_suggestionButton;
    UIButton *_favoriteButton;
    UIView *_topSeparator;
    UIView *_bottomSeparator;
    UIView *_middleSeparator;
    UITapGestureRecognizer *_suggestionTapRecognizer;
    UITapGestureRecognizer *_favoriteTapRecognizer;
    NSLayoutConstraint *_favoriteButtonTopBaselineConstraint;
    NSLayoutConstraint *_favoriteButtonBottomBaselineConstraint;
    NSLayoutConstraint *_suggestionButtonTopBaselineConstraint;
    NSLayoutConstraint *_suggestionButtonBottomBaselineConstraint;
    NSArray *_activeConstraints;
    NSObject<OS_dispatch_queue> *_fetchSuggestionQueue;
    PHManualFetchResult *_peopleFetchResult;
    NSArray *_cachedSuggestions;
}

@property _Bool fetchingSuggestion; // @synthesize fetchingSuggestion=_fetchingSuggestion;
@property(retain, nonatomic) NSArray *cachedSuggestions; // @synthesize cachedSuggestions=_cachedSuggestions;
@property(retain, nonatomic) PHManualFetchResult *peopleFetchResult; // @synthesize peopleFetchResult=_peopleFetchResult;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fetchSuggestionQueue; // @synthesize fetchSuggestionQueue=_fetchSuggestionQueue;
@property(retain, nonatomic) NSArray *activeConstraints; // @synthesize activeConstraints=_activeConstraints;
@property(retain, nonatomic) NSLayoutConstraint *suggestionButtonBottomBaselineConstraint; // @synthesize suggestionButtonBottomBaselineConstraint=_suggestionButtonBottomBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *suggestionButtonTopBaselineConstraint; // @synthesize suggestionButtonTopBaselineConstraint=_suggestionButtonTopBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *favoriteButtonBottomBaselineConstraint; // @synthesize favoriteButtonBottomBaselineConstraint=_favoriteButtonBottomBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *favoriteButtonTopBaselineConstraint; // @synthesize favoriteButtonTopBaselineConstraint=_favoriteButtonTopBaselineConstraint;
@property(retain, nonatomic) UITapGestureRecognizer *favoriteTapRecognizer; // @synthesize favoriteTapRecognizer=_favoriteTapRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *suggestionTapRecognizer; // @synthesize suggestionTapRecognizer=_suggestionTapRecognizer;
@property(retain, nonatomic) UIView *middleSeparator; // @synthesize middleSeparator=_middleSeparator;
@property(retain, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(retain, nonatomic) UIView *topSeparator; // @synthesize topSeparator=_topSeparator;
@property(retain, nonatomic) UIButton *favoriteButton; // @synthesize favoriteButton=_favoriteButton;
@property(retain, nonatomic) UIButton *suggestionButton; // @synthesize suggestionButton=_suggestionButton;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(nonatomic) __weak id <PXWidgetDelegate> widgetDelegate; // @synthesize widgetDelegate=_widgetDelegate;
- (void).cxx_destruct;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)contentSizeCategoryChanged:(id)arg1;
- (void)contentViewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (long long)_currentSizeClass;
- (void)_stopListeningForChanges;
- (void)_startListeningForChanges;
- (void)_handleFavoriteTap:(id)arg1;
- (void)_handleSuggestionTap:(id)arg1;
- (void)_updateFavoriteTitle;
- (void)_updateSuggestionStateIfNeeded;
- (void)_updateSuggestionState;
- (double)_dynamicTextBottomBaseline;
- (double)_dynamicTextTopBaseline;
- (double)_dynamicBaselineForTextStyle:(id)arg1 originalValue:(double)arg2;
- (void)_updateConstraintsForSizeClass:(long long)arg1;
- (id)_newButtonWithTitle:(id)arg1 tintColor:(id)arg2;
- (void)_setupViews;
- (id)_firstPerson;
@property(readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
- (void)unloadContentData;
- (void)loadContentData;
@property(readonly, nonatomic) _Bool hasContentForCurrentInput;
- (void)prepareContentForSize:(struct CGSize)arg1;
- (double)preferredContentHeightForWidth:(double)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) _Bool allowUserInteractionWithSubtitle;
@property(readonly, nonatomic) long long contentLayoutStyle;
@property(readonly, nonatomic) PXTilingController *contentTilingController;
@property(readonly, nonatomic) long long contentViewAnchoringType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isFaceModeEnabled) _Bool faceModeEnabled;
@property(readonly, nonatomic) _Bool hasLoadedContentData;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *localizedCaption;
@property(readonly, nonatomic) NSString *localizedDisclosureTitle;
@property(readonly, nonatomic) NSString *localizedSubtitle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(nonatomic, getter=isSelecting) _Bool selecting;
@property(readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property(retain, nonatomic) PXWidgetSpec *spec;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsFaceMode;
@property(readonly, nonatomic) _Bool supportsSelection;

@end

