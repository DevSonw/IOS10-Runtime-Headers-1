//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGSize {
    double width;
    double height;
};

struct CXCallUpdateHasSet {
    unsigned int callerIdentifier:1;
    unsigned int localizedCallerName:1;
    unsigned int emergency:1;
    unsigned int usingBaseband:1;
    unsigned int blocked:1;
    unsigned int ttyType:1;
    unsigned int video:1;
    unsigned int audioCategory:1;
    unsigned int audioMode:1;
    unsigned int audioInterruptionProvider:1;
    unsigned int audioInterruptionOperationMode:1;
    unsigned int requiresInCallSounds:1;
    unsigned int inCallSoundRegion:1;
    unsigned int supportsHolding:1;
    unsigned int supportsGrouping:1;
    unsigned int supportsUngrouping:1;
    unsigned int supportsDTMF:1;
    unsigned int supportsUnambiguousMultiPartyState:1;
    unsigned int supportsAddCall:1;
    unsigned int supportsSendingToVoicemail:1;
    unsigned int videoStreamToken:1;
    unsigned int crossDeviceIdentifier:1;
    unsigned int handoffContext:1;
    unsigned int context:1;
};
