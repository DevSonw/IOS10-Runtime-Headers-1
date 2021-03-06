//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/NSCopying-Protocol.h>

@class INRestaurant, NSString;

@interface INGetUserCurrentRestaurantReservationBookingsIntent : INIntent <NSCopying>
{
    INRestaurant *_restaurant;
    NSString *_reservationIdentifier;
}

+ (id)intentDescription;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *reservationIdentifier; // @synthesize reservationIdentifier=_reservationIdentifier;
@property(copy, nonatomic) INRestaurant *restaurant; // @synthesize restaurant=_restaurant;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

