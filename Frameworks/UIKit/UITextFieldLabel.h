//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

__attribute__((visibility("hidden")))
@interface UITextFieldLabel : UILabel
{
    _Bool _shouldRenderWithoutTextField;
}

+ (id)_defaultAttributes;
+ (id)defaultFont;
@property(nonatomic) _Bool shouldRenderWithoutTextField; // @synthesize shouldRenderWithoutTextField=_shouldRenderWithoutTextField;
- (_Bool)_shouldDrawUnderlinesLikeWebKit;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)_defaultDrawTextInRect:(struct CGRect)arg1;

@end
