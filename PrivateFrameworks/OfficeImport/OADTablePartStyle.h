//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class OADTableCellStyle, OADTableTextStyle;

__attribute__((visibility("hidden")))
@interface OADTablePartStyle : NSObject
{
    OADTableTextStyle *mTextStyle;
    OADTableCellStyle *mCellStyle;
}

+ (id)defaultStyle;
- (id)description;
- (void)applyOverridesFrom:(id)arg1;
- (id)shallowCopy;
- (void)setCellStyle:(id)arg1;
- (id)cellStyle;
- (void)setTextStyle:(id)arg1;
- (id)textStyle;
- (void)dealloc;

@end
