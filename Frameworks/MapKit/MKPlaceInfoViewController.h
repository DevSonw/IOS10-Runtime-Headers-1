//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionViewController.h>

#import <MapKit/MKOfflineModeViewController-Protocol.h>
#import <MapKit/MKPlaceAttributionProvider-Protocol.h>
#import <MapKit/UIGestureRecognizerDelegate-Protocol.h>
#import <MapKit/_MKInfoCardChildViewControllerAnalyticsDelegate-Protocol.h>

@class MKMapItem, MKPlaceSectionRowView, NSAttributedString, NSMutableArray, NSString, UILongPressGestureRecognizer, _MKPlaceViewController;
@protocol MKPlaceInfoViewControllerDelegate, _MKPlaceItem;

__attribute__((visibility("hidden")))
@interface MKPlaceInfoViewController : MKPlaceSectionViewController <MKOfflineModeViewController, UIGestureRecognizerDelegate, MKPlaceAttributionProvider, _MKInfoCardChildViewControllerAnalyticsDelegate>
{
    NSMutableArray *_rows;
    NSMutableArray *_unusedRows;
    UILongPressGestureRecognizer *_longPressRecognizer;
    MKPlaceSectionRowView *_selectedRow;
    _Bool _shouldHideContactInfo;
    _Bool _offlineMode;
    id <_MKPlaceItem> _placeItem;
    MKMapItem *_mapItem;
    _MKPlaceViewController *_owner;
    id <MKPlaceInfoViewControllerDelegate> _infoDelegate;
}

@property(nonatomic) _Bool offlineMode; // @synthesize offlineMode=_offlineMode;
@property(nonatomic) _Bool shouldHideContactInfo; // @synthesize shouldHideContactInfo=_shouldHideContactInfo;
@property(nonatomic) __weak id <MKPlaceInfoViewControllerDelegate> infoDelegate; // @synthesize infoDelegate=_infoDelegate;
@property(nonatomic) __weak _MKPlaceViewController *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(retain, nonatomic) id <_MKPlaceItem> placeItem; // @synthesize placeItem=_placeItem;
- (void).cxx_destruct;
- (id)infoCardChildPossibleActions;
- (void)_launchMaps;
- (void)_launchMapsDirectionsWithSource:(id)arg1 destination:(id)arg2 directionsMode:(id)arg3;
- (void)_shareAddress:(id)arg1 fromView:(id)arg2;
- (void)_directionsToAddress:(unsigned long long)arg1;
- (void)_canMakeCalls:(CDUnknownBlockType)arg1;
- (void)_configureRow:(id)arg1 ofType:(unsigned long long)arg2 withValue:(id)arg3;
- (id)_createViewForInfoRow:(unsigned long long)arg1;
- (id)_addRowForType:(unsigned long long)arg1 withValue:(id)arg2 toViews:(id)arg3;
- (id)_addRowForType:(unsigned long long)arg1 toViews:(id)arg2;
- (void)_addContactRow:(id)arg1 ofType:(unsigned long long)arg2 toViews:(id)arg3 forceTitles:(_Bool)arg4;
- (void)_updateViewsAnimated:(_Bool)arg1;
- (id)_firstUnusedRowOfType:(unsigned long long)arg1;
- (id)_firstRowOfType:(unsigned long long)arg1;
- (void)_menuDismissed:(id)arg1;
- (void)_rowLongPressed:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)attributionLinkWasClicked:(id)arg1;
- (id)getAttributionDisplayString;
- (_Bool)shouldShowDetails;
- (id)contact;
@property(readonly, nonatomic) _Bool hasContent;
- (id)_stackView;
- (void)viewDidLoad;
@property(readonly, nonatomic) NSAttributedString *infoAttributionString;
- (id)initWithPlaceItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

