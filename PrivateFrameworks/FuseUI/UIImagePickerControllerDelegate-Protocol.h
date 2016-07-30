//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/NSObject-Protocol.h>

@class NSDictionary, UIImage, UIImagePickerController;

@protocol UIImagePickerControllerDelegate <NSObject>

@optional
- (void)imagePickerControllerDidCancel:(UIImagePickerController *)arg1;
- (void)imagePickerController:(UIImagePickerController *)arg1 didFinishPickingMediaWithInfo:(NSDictionary *)arg2;
- (void)imagePickerController:(UIImagePickerController *)arg1 didFinishPickingImage:(UIImage *)arg2 editingInfo:(NSDictionary *)arg3;
@end
