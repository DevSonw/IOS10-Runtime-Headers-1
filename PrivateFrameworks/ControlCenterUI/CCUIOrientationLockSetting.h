//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ControlCenterUI/CCUISettingModule.h>

@interface CCUIOrientationLockSetting : CCUISettingModule
{
    _Bool _orientationLockEnabled;
}

+ (id)statusOffString;
+ (id)statusOnString;
+ (id)displayName;
+ (id)identifier;
@property(nonatomic, getter=_isOrientationLockEnabled, setter=_setOrientationLockEnabled:) _Bool orientationLockEnabled; // @synthesize orientationLockEnabled=_orientationLockEnabled;
- (_Bool)_isStateOverridden;
- (_Bool)_stateWithEffectiveOverrides;
- (id)glyphImageForState:(int)arg1;
- (void)_updateState;
- (_Bool)_toggleState;
- (void)_tearDown;
- (_Bool)isRestricted;
- (void)deactivate;
- (void)activate;
- (id)selectedStateColor;
- (id)aggdKey;
- (void)dealloc;

@end
