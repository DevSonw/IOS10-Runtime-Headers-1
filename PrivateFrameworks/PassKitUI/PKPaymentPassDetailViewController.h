//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKSectionTableViewController.h>

#import <PassKitUI/MFMailComposeViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPassHeaderViewDelegate-Protocol.h>
#import <PassKitUI/PKPaymentDataProviderDelegate-Protocol.h>
#import <PassKitUI/PKPaymentVerificationControllerDelegate-Protocol.h>
#import <PassKitUI/PSStateRestoration-Protocol.h>
#import <PassKitUI/UITableViewDataSource-Protocol.h>
#import <PassKitUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSNumber, NSNumberFormatter, NSObject, NSString, PKLinkedApplication, PKPassHeaderView, PKPaymentApplication, PKPaymentPass, PKPaymentPassDetailActivationFooterView, PKPaymentVerificationController, PKPaymentWebService, PKSettingTableCell, UIColor, UISegmentedControl, UIView, UIVisualEffectView;
@protocol OS_dispatch_source, PKPassDeleteHandler, PKPassLibraryDataProvider, PKPaymentDataProvider;

@interface PKPaymentPassDetailViewController : PKSectionTableViewController <MFMailComposeViewControllerDelegate, PKPaymentDataProviderDelegate, PKPaymentVerificationControllerDelegate, PKPassHeaderViewDelegate, UITableViewDataSource, UITableViewDelegate, PSStateRestoration>
{
    id <PKPassLibraryDataProvider> _passLibraryDataProvider;
    id <PKPaymentDataProvider> _paymentServiceDataProvider;
    long long _detailViewStyle;
    NSObject<OS_dispatch_source> *_transactionTimer;
    _Bool _deepLinkingEnabled;
    _Bool _passDeletionInProgress;
    PKPaymentPass *_pass;
    PKLinkedApplication *_linkedApplication;
    PKPaymentApplication *_defaultPaymentApplication;
    PKPaymentWebService *_webService;
    PKPaymentVerificationController *_verificationController;
    PKPaymentPassDetailActivationFooterView *_activationFooter;
    NSNumberFormatter *_numberFormatter;
    PKSettingTableCell *_messagesSwitch;
    PKSettingTableCell *_transactionsSwitch;
    PKSettingTableCell *_automaticPresentationSwitch;
    NSNumber *_paymentTransactionCellHeightCache;
    UIColor *_cellBackgroundColor;
    UIColor *_sectionHeaderFooterBackgroundColor;
    NSArray *_transactions;
    NSMutableArray *_pendingTransactions;
    NSArray *_allPaymentApplications;
    NSArray *_contactlessPaymentApplications;
    NSArray *_tabBarSegments;
    double _headerHeight;
    struct UIEdgeInsets _headerContentInset;
    double _tabBarHeight;
    _Bool _navigationControllerHidesShadow;
    UIView *_headerView;
    PKPassHeaderView *_passHeaderView;
    UIVisualEffectView *_blurView;
    UISegmentedControl *_tabBar;
    UIView *_keyLine;
    UIView *_topCap;
    UIView *_bottomCap;
    id <PKPassDeleteHandler> _deleteOverrider;
    UIColor *_primaryTextColor;
    UIColor *_detailTextColor;
    UIColor *_linkTextColor;
    UIColor *_warningTextColor;
    UIColor *_highlightColor;
}

@property(nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(nonatomic) UIColor *warningTextColor; // @synthesize warningTextColor=_warningTextColor;
@property(nonatomic) UIColor *linkTextColor; // @synthesize linkTextColor=_linkTextColor;
@property(nonatomic) UIColor *detailTextColor; // @synthesize detailTextColor=_detailTextColor;
@property(nonatomic) UIColor *primaryTextColor; // @synthesize primaryTextColor=_primaryTextColor;
@property(nonatomic) id <PKPassDeleteHandler> deleteOverrider; // @synthesize deleteOverrider=_deleteOverrider;
- (void).cxx_destruct;
- (_Bool)canBeShownFromSuspendedState;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)_presentMerchantDetailsViewWithTransaction:(id)arg1 forCell:(id)arg2;
- (void)presentVerificationViewController:(id)arg1 animated:(_Bool)arg2;
- (void)didChangeVerificationPresentation;
- (void)passHeaderViewDidChangePass:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_passSettingsChanged:(id)arg1;
- (void)_done:(id)arg1;
- (void)_activationFooterPressed:(id)arg1;
- (void)_transactionsSwitchChanged:(id)arg1;
- (void)_messagesSwitchChanged:(id)arg1;
- (void)_automaticPresentationSwitchChanged:(id)arg1;
- (void)_tabBarSegmentChanged:(id)arg1;
- (double)_paymentTransactionCellHeight;
- (double)_heightForPassStateSectionWithTableView:(id)arg1;
- (id)_footerTextForPassStateSection;
- (id)_footerViewForPassStateSection;
- (double)_footerViewHeightForPassStateSectionWithTableView:(id)arg1;
- (void)_didSelectPassStateSection;
- (id)_headerTitleForPassStateSection;
- (unsigned long long)_passStateSectionGenerateCellWithOutput:(id *)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (void)_didSelectDeleteCard;
- (void)_openIssuerWebsite;
- (void)_callIssuer;
- (void)_emailIssuer;
- (void)_didSelectContactBankSection;
- (void)_didSelectTransactionAtRow:(long long)arg1;
- (_Bool)_canSelectTransaction;
- (id)_deviceSpecificLocalizedStringKeyForKey:(id)arg1;
- (void)updateActivationFooterViewContents;
- (id)_activationFooterView;
- (_Bool)_shouldShowContactCell;
- (_Bool)_shouldShowPrivacyPolicyCell;
- (_Bool)_shouldShowTermsCell;
- (_Bool)_shouldShowAutomaticPresentation;
- (id)_createTabBarWithSelectedIndex:(long long)arg1;
- (_Bool)_updateHeaderHeight;
- (void)_updateTabBarWithSegments:(id)arg1;
- (void)_updateTabBar;
- (void)_updateTransactionsWithPendingTransactions;
- (void)_cancelPendingTransactionTimerClearingPending:(_Bool)arg1;
- (void)_startPendingTransactionTimer;
- (id)_deleteCardCellForTableView:(id)arg1;
- (id)_deviceAccountNumberCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (void)_didSelectPaymentApplicationSectionRowAtIndexPath:(id)arg1;
- (id)_paymentApplicationsCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)_transactionCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (id)_transactionsSwitchCellForTableView:(id)arg1;
- (id)_messagesSwitchCellForTableView:(id)arg1;
- (id)_automaticPresentationCellForTableView:(id)arg1;
- (unsigned long long)_deleteSectionCellWithOutput:(id *)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (unsigned long long)_cardInfoSectionGenerateCellWithOutput:(id *)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (void)_didSelectDeleteSectionAtRow:(long long)arg1;
- (void)_didSelectPrivacySectionAtRow:(long long)arg1;
- (unsigned long long)_privacyTermsSectionGenerateCellWithOutput:(id *)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3;
- (void)_didSelectBillingAddress;
- (id)_billingAddressCellForTableView:(id)arg1;
- (id)_moreTransactionsCellForTableView:(id)arg1;
- (id)_linkedApplicationCellForTableView:(id)arg1;
- (id)_linkedAppCellForTableView:(id)arg1;
- (id)_infoCellWithPrimaryText:(id)arg1 detailText:(id)arg2 forTableView:(id)arg3;
- (id)_infoCellWithDescription:(id)arg1 forTableView:(id)arg2;
- (id)_disclosureCellWithTitle:(id)arg1 forTableView:(id)arg2;
- (id)_linkCellWithText:(id)arg1 forTableView:(id)arg2;
- (id)_subtitleCellForTableView:(id)arg1;
- (id)_defaultCellWithTextColor:(id)arg1 forTableView:(id)arg2;
- (void)_applyDimToView:(id)arg1;
- (void)_applyHeaderFooterStylingToView:(id)arg1;
- (void)_applyDefaultDynamicStylingToCell:(id)arg1;
- (void)_applyDefaultStaticStylingToCell:(id)arg1;
- (void)_reloadTransactionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(_Bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(_Bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)rowAnimationForDeletingSection:(unsigned long long)arg1;
- (long long)rowAnimationForInsertingSection:(unsigned long long)arg1;
- (long long)rowAnimationForReloadingSection:(unsigned long long)arg1;
- (_Bool)shouldMapSection:(unsigned long long)arg1;
- (void)_reloadTransactionSection;
- (void)_reloadView;
- (void)_reloadPassAndView;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (_Bool)pkui_prefersNavigationBarShadowHidden;
- (void)dealloc;
- (id)initWithPass:(id)arg1 webService:(id)arg2 style:(long long)arg3 passLibraryDataProvider:(id)arg4 paymentServiceDataProvider:(id)arg5;
- (id)initWithPass:(id)arg1 webService:(id)arg2 style:(long long)arg3 dataProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
