open BsReactNative;

[@react.component]
let make = (~message, ()) => {
  React.useEffect(() => {
    Js.log("Hey!");
    None;
  }); 
  <View />
};
