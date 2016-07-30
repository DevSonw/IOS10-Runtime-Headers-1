//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNGuidanceLevelUpdaterDelegate-Protocol.h>
#import <Navigation/MNNavigationServiceDaemonInterface-Protocol.h>
#import <Navigation/MNNavigationSessionObserver-Protocol.h>

@class MNGuidanceLevelUpdater, MNNavigationProxyUpdater, MNNavigationSession, MNRouteManager, MNSettings, NSMutableDictionary, NSString;
@protocol MNNavigationServiceClientInterface;

__attribute__((visibility("hidden")))
@interface MNNavigationServiceLocalProxy : NSObject <MNNavigationSessionObserver, MNGuidanceLevelUpdaterDelegate, MNNavigationServiceDaemonInterface>
{
    id <MNNavigationServiceClientInterface> _delegate;
    MNSettings *_settings;
    MNRouteManager *_routeManager;
    MNNavigationSession *_navigationSession;
    MNNavigationProxyUpdater *_proxyUpdater;
    MNGuidanceLevelUpdater *_guidanceLevelUpdater;
    unsigned long long _navigationServiceState;
    CDUnknownBlockType _activeNavigationHandler;
    _Bool _xpcTransactionStarted;
    NSMutableDictionary *_trafficIncidentAlertCallbacks;
}

@property(readonly, nonatomic) MNNavigationSession *navigationSession; // @synthesize navigationSession=_navigationSession;
@property(readonly, nonatomic) MNSettings *settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id <MNNavigationServiceClientInterface> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)guidanceLevelUpdater:(id)arg1 didUpdateGuidanceLevel:(int)arg2;
- (void)navigationSession:(id)arg1 didSignalAlightForStepAtIndex:(unsigned long long)arg2;
- (void)navigationSession:(id)arg1 didUpdateTracePlaybackDetails:(id)arg2;
- (void)navigationSessionDidFailToRecordTrace:(id)arg1;
- (void)navigationSession:(id)arg1 didUpdateTrafficForETARoute:(id)arg2 from:(unsigned int)arg3 to:(unsigned int)arg4;
- (void)navigationSession:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;
- (void)navigationSession:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;
- (void)navigationSession:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)navigationSession:(id)arg1 didEnableGuidancePrompts:(_Bool)arg2;
- (void)navigationSessionHideSecondaryStep:(id)arg1;
- (void)navigationSession:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;
- (void)navigationSession:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)navigationSession:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(_Bool)arg8;
- (void)navigationSession:(id)arg1 currentStepIndex:(unsigned long long)arg2 distanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
- (void)navigationSession:(id)arg1 remainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)navigationSession:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 remainingTime:(double)arg4 remainingDistance:(double)arg5 closestStepIndex:(unsigned long long)arg6;
- (void)navigationSessionWillResumeFromPause:(id)arg1;
- (void)navigationSessionWillPause:(id)arg1;
- (void)navigationSessionDidArrive:(id)arg1;
- (void)navigationSession:(id)arg1 failedRerouteWithErrorCode:(long long)arg2;
- (void)navigationSession:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;
- (void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3;
- (void)navigationSessionDidCancelReroute:(id)arg1;
- (void)navigationSessionWillReroute:(id)arg1;
- (void)navigationSession:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
- (void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)navigationSession:(id)arg1 didChangeGuidanceState:(id)arg2;
- (void)navigationSession:(id)arg1 didChangeNavigationState:(int)arg2;
- (void)navigationSessionDidStop:(id)arg1;
- (void)navigationSessionWillStop:(id)arg1;
- (void)navigationSessionDidStart:(id)arg1;
- (void)navigationSessionWillStart:(id)arg1;
- (_Bool)_setState:(unsigned long long)arg1;
- (void)_endXPCTransaction;
- (void)_startXPCTransaction;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (void)setTracePosition:(double)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTraceIsPlaying:(_Bool)arg1;
- (void)acceptReroute:(_Bool)arg1 forTrafficIncidentAlertDetails:(id)arg2;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setIsConnectedToCarplay:(_Bool)arg1;
@property(nonatomic) _Bool guidancePromptsEnabled;
@property(nonatomic) int headingOrientation;
- (void)stopCurrentGuidancePrompt;
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)repeatCurrentTrafficAlertWithReply:(CDUnknownBlockType)arg1;
- (void)repeatCurrentGuidanceWithReply:(CDUnknownBlockType)arg1;
- (void)changeSettings:(id)arg1;
- (void)resumeOriginalDestination;
- (void)updateDestination:(id)arg1;
- (void)stopNavigation;
- (void)startNavigationForRouteDetails:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)prepareNavigationWithRouteDetails:(id)arg1;
- (id)_guidanceLevelUpdater;
- (id)_routeManager;
- (void)_setupLocationManager;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
