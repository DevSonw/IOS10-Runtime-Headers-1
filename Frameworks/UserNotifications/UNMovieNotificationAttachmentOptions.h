//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotifications/UNNotificationAttachmentOptions.h>

@interface UNMovieNotificationAttachmentOptions : UNNotificationAttachmentOptions
{
    _Bool _thumbnailHidden;
    CDStruct_1b6d18a9 _thumbnailTimestamp;
    struct CGRect _thumbnailClippingRect;
}

+ (_Bool)supportsSecureCoding;
+ (id)optionsFromOptionsDictionary:(id)arg1;
@property(readonly, nonatomic) CDStruct_1b6d18a9 thumbnailTimestamp; // @synthesize thumbnailTimestamp=_thumbnailTimestamp;
@property(readonly, nonatomic) struct CGRect thumbnailClippingRect; // @synthesize thumbnailClippingRect=_thumbnailClippingRect;
@property(readonly, nonatomic) _Bool thumbnailHidden; // @synthesize thumbnailHidden=_thumbnailHidden;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithThumbnailHidden:(_Bool)arg1 thumbnailClippingRect:(struct CGRect)arg2 thumbnailTimestamp:(CDStruct_1b6d18a9)arg3;

@end

