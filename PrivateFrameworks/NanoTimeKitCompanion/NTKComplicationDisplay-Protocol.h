//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@protocol NTKComplicationDisplayObserver;

@protocol NTKComplicationDisplay <NSObject>
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver;

@optional
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (void)setEditing:(_Bool)arg1;
- (void)setMaxSize:(struct CGSize)arg1;
@end

